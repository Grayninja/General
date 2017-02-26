SRC_TOP:=..
include ../Makefile.inc

SUBDIRS = \
   10.2-Using_the_Overloaded_Operators_of_standard_Library_Class_string \
   10.5-Overloading_the_Binary_Stream_Insertion_and_Stream_Extraction_Operators \
   10.8-Case_Study_A_Date_Class \
   10.10-Case_Study_Array_Class \
   10.12-Converting_Between_Types \
   10.13-explicit_Constructors_and_Conversion_Operators

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
