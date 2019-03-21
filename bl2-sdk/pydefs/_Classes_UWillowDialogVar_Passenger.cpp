#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDialogVar_Passenger()
{
    class_< UWillowDialogVar_Passenger, bases< UGearboxDialogVariable >  , boost::noncopyable>("UWillowDialogVar_Passenger", no_init)
        .def("StaticClass", &UWillowDialogVar_Passenger::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}