#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxDialogVar_Instigator()
{
    class_< UGearboxDialogVar_Instigator, bases< UGearboxDialogVariable >  , boost::noncopyable>("UGearboxDialogVar_Instigator", no_init)
        .def("StaticClass", &UGearboxDialogVar_Instigator::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}