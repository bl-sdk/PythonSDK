#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSoundThemeBinding()
{
    class_< FSoundThemeBinding >("FSoundThemeBinding", no_init)
        .def_readwrite("ThemeName", &FSoundThemeBinding::ThemeName)
        .def_readwrite("Theme", &FSoundThemeBinding::Theme)
  ;
}