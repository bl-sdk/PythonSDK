#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMultiFont()
{
    class_< UMultiFont, bases< UFont >  , boost::noncopyable>("UMultiFont", no_init)
        .def_readwrite("ResolutionTestTable", &UMultiFont::ResolutionTestTable)
        .def("StaticClass", &UMultiFont::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetResolutionTestTableIndex", &UMultiFont::GetResolutionTestTableIndex)
        .staticmethod("StaticClass")
  ;
}