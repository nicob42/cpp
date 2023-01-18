#include "Replace.hpp"

// Constructeur
Replace::Replace(void)
{

}

// Nommage du fichier
bool	Replace::setName(std::string filename)
{
	if (filename.empty())
		return (false);
	this->filename = filename;
	if (this->input_file.is_open())
		this->input_file.close();
	this->input_file.open(filename);
	return (true);
}

bool	Replace::replace(std::string s1, std::string s2)
{
	std::cout << "Remplacement des strings..." << std::endl;
	if (s1.empty() || s2.empty()) // Protection en cas de chaine vide
		return (false);
	// Récupération du contenu avec istreambuf_iterator
	std::string	result;
	result.assign(
		std::istreambuf_iterator<char>(this->input_file),
		std::istreambuf_iterator<char>()
	);
	// On remplace tous les s1 par s2
	size_t	length = s1.length();
	for (size_t pos = 0; pos < result.length(); pos++)
		if (result.compare(pos, length, s1) == 0)
			result.erase(pos, length).insert(pos, s2);
	// Transfert dans le nouveau fichier
	std::string	out_filename = this->filename;
	this->output_file.open(out_filename + ".replace");
	this->output_file << result;
	this->output_file.close();
	return (true);
}

// Destructeur
Replace::~Replace(void)
{
	if (this->input_file.is_open())
		this->input_file.close();
}