#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowTI_CalcCanFire()
{
    class_< UWillowTI_CalcCanFire, bases< UTI_Calc >  , boost::noncopyable>("UWillowTI_CalcCanFire", no_init)
        .def("StaticClass", &UWillowTI_CalcCanFire::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}