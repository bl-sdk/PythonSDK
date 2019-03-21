#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxDialogVar_Other()
{
    class_< UGearboxDialogVar_Other, bases< UGearboxDialogVariable >  , boost::noncopyable>("UGearboxDialogVar_Other", no_init)
        .def("StaticClass", &UGearboxDialogVar_Other::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}