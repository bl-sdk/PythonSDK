#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowTI_PrioritizeOpinion()
{
    class_< UWillowTI_PrioritizeOpinion, bases< UTI_Prioritize >  , boost::noncopyable>("UWillowTI_PrioritizeOpinion", no_init)
        .def_readwrite("Opinion", &UWillowTI_PrioritizeOpinion::Opinion)
        .def("StaticClass", &UWillowTI_PrioritizeOpinion::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}