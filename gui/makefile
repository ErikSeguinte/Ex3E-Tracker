SOURCES :=$(wildcard *.ui)
FILES:=$(patsubst %.ui,ui_%.h, $(SOURCES))


.PHONY: all

all: $(FILES)
	
ui_%.h: %.ui
	uic $< -o $@
