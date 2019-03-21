#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowTI_PrioritizeAttacking()
{
    class_< UWillowTI_PrioritizeAttacking, bases< UTI_Prioritize >  , boost::noncopyable>("UWillowTI_PrioritizeAttacking", no_init)
        .def_readwrite("DecayRate", &UWillowTI_PrioritizeAttacking::DecayRate)
        .def_readwrite("FullyEngagedPct", &UWillowTI_PrioritizeAttacking::FullyEngagedPct)
        .def("StaticClass", &UWillowTI_PrioritizeAttacking::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}