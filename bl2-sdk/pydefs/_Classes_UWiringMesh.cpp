#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWiringMesh()
{
    class_< UWiringMesh, bases< UStaticMesh >  , boost::noncopyable>("UWiringMesh", no_init)
        .def_readonly("UnknownData00", &UWiringMesh::UnknownData00)
        .def("StaticClass", &UWiringMesh::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}