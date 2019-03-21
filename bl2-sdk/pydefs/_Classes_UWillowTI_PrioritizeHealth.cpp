#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowTI_PrioritizeHealth()
{
    class_< UWillowTI_PrioritizeHealth, bases< UTI_Prioritize >  , boost::noncopyable>("UWillowTI_PrioritizeHealth", no_init)
        .def_readwrite("Priority", &UWillowTI_PrioritizeHealth::Priority)
        .def("StaticClass", &UWillowTI_PrioritizeHealth::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}