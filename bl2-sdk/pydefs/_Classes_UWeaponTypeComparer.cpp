#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWeaponTypeComparer()
{
    class_< UWeaponTypeComparer, bases< UQSortComparer >  , boost::noncopyable>("UWeaponTypeComparer", no_init)
        .def("StaticClass", &UWeaponTypeComparer::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}