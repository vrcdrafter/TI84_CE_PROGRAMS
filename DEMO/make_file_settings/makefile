# ----------------------------
# Makefile Options
# ----------------------------

NAME = $(PARAM)
ICON = icon.png
DESCRIPTION = "CE C Toolchain Demo"
COMPRESSED = NO
ARCHIVED = NO

CFLAGS = -Wall -Wextra -Oz
CXXFLAGS = -Wall -Wextra -Oz

HAS_PRINTF = NO

# ----------------------------

include $(shell cedev-config --makefile)

# ----------------------------

$(FONT_INC): $(FONT)
	$(Q)$(call MKDIR,$(@D))
	$(Q)convfont -o carray -f $< -a 1 -b 1 -w bold -c 2 -x 9 -l 0x0B -Z $@
	
MAKEFILES = make_file_settings/makefile  $(wildcard */*/makefile) $(wildcard */*/*/makefile)

all clean gfx .PHONY: $(MAKEFILES)

$(MAKEFILES):
	$(MAKE) -C $(dir $@) $(or $(MAKECMDGOALS),$(findstring debug,$@))

.PHONY: all clean gfx
