#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowTeleporter()
{
    class_< AWillowTeleporter, bases< ATeleporter >  , boost::noncopyable>("AWillowTeleporter", no_init)
        .def("StaticClass", &AWillowTeleporter::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnToggle", &AWillowTeleporter::OnToggle)
        .staticmethod("StaticClass")
  ;
}