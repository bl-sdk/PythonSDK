#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowTI_CalcExposure()
{
    class_< UWillowTI_CalcExposure, bases< UTI_Calc >  , boost::noncopyable>("UWillowTI_CalcExposure", no_init)
        .def("StaticClass", &UWillowTI_CalcExposure::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}