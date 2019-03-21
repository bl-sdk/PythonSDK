#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowTI_CalcThreat()
{
    class_< UWillowTI_CalcThreat, bases< UTI_Calc >  , boost::noncopyable>("UWillowTI_CalcThreat", no_init)
        .def("StaticClass", &UWillowTI_CalcThreat::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}