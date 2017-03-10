SRC_TOP:=..
include ../../Makefile.inc

SUBDIRS = \
	11.3.1-Creating_and_using_a_CommissionEmployee_class \
	11.3.2-Creating_a_BasePlusCommissionEmployee_class_without_inheritance \
	11.3.3.Create_a_Inheritance_Hierarchy \
	11.3.4-Inheritance_using_protected_data \
	11.3.5-Inheritance_using_private_data

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
