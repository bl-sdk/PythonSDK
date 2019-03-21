#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowTI_CalcCombat()
{
    class_< UWillowTI_CalcCombat, bases< UTI_Calc >  , boost::noncopyable>("UWillowTI_CalcCombat", no_init)
        .def("StaticClass", &UWillowTI_CalcCombat::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}