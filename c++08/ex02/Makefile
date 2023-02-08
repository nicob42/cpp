# Nom de l'exécutable
NAME = mutant

# Liste des fichiers source (.cpp)
SRC = $(wildcard *.cpp)

# Liste des fichiers objets (.o)
OBJ = $(patsubst %.cpp, obj/%.o, $(SRC))

# Compilateur
CC = c++

# Options de compilation
CFLAGS = -std=c++98 -Wall -Wextra -Werror

# Options de l'éditeur de liens
LDFLAGS =

# Règle de création de l'exécutable + appel de la règle move-headers
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(LDFLAGS) $^ -o $@

# Règle de création des fichiers objets
obj/%.o: %.cpp
	@mkdir -p obj
	$(CC) $(CFLAGS) -Iinclude -c $< -o $@

# Règle de création du dossier include et déplacements des fichiers .hpp dedans
# Règle de nettoyage
.PHONY: clean
clean:
	rm -rf obj $(NAME)