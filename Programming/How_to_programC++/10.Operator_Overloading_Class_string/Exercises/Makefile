include ../Makefile.inc

SUBDIRS = \
    10.7-Overloading_the_parentheses_operator

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
