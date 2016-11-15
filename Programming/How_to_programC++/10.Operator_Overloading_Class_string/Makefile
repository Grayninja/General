include ../Makefile.inc

SUBDIRS = \
   10.2-Using_the_Overloaded_Operators_of_standard_Library_Class_string \
   10.5-Overloading_the_Binary_Stream_Insertion_and_Stream_Extraction_Operators

CLEANDIRS = $(SUBDIRS:%=clean-%)
BUILDIRS = $(SUBDIRS:%=build-%)

all: subdirs

subdirs: $(BUILDIRS)
$(BUILDIRS):
	$(MAKE) -C $(@:build-%=%)
	
clean: $(CLEANDIRS)
$(CLEANDIRS):
	$(MAKE) -C $(@:clean-%=%) clean

.PHONY: subdirs $(SUBDIRS) $(CLEANDIRS) $(BUILDIRS)
.PHONY: all clean
