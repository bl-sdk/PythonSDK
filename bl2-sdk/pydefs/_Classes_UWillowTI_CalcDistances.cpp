#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowTI_CalcDistances()
{
    class_< UWillowTI_CalcDistances, bases< UTI_Calc >  , boost::noncopyable>("UWillowTI_CalcDistances", no_init)
        .def("StaticClass", &UWillowTI_CalcDistances::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}