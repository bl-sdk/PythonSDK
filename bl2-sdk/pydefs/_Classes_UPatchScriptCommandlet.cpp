#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPatchScriptCommandlet()
{
    class_< UPatchScriptCommandlet, bases< UCommandlet >  , boost::noncopyable>("UPatchScriptCommandlet", no_init)
        .def_readonly("UnknownData00", &UPatchScriptCommandlet::UnknownData00)
        .def("StaticClass", &UPatchScriptCommandlet::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}