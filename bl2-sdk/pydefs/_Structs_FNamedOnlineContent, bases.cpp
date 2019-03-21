#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FNamedOnlineContent()
{
    class_< FNamedOnlineContent, bases< FOnlineContent >  >("FNamedOnlineContent", no_init)
        .def_readwrite("NameInfo", &FNamedOnlineContent::NameInfo)
        .def_readwrite("NamedContentType", &FNamedOnlineContent::NamedContentType)
  ;
}