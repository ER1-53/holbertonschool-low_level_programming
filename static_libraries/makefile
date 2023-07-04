CC = gcc
CFLAGS = -c
SRCDIR = src
OBJDIR = obj

# Liste des fichiers sources
SOURCES = $(wildcard $(SRCDIR)/*.c)

# Liste des fichiers objets correspondants
OBJECTS = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SOURCES))

# Nom de l'exécutable final
EXECUTABLE = mon_programme

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $^ -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJDIR)/*.o $(EXECUTABLE)
