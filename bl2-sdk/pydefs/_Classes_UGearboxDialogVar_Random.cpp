#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxDialogVar_Random()
{
    class_< UGearboxDialogVar_Random, bases< UGearboxDialogVariable >  , boost::noncopyable>("UGearboxDialogVar_Random", no_init)
        .def_readwrite("Allegiance", &UGearboxDialogVar_Random::Allegiance)
        .def_readwrite("DistanceLimit", &UGearboxDialogVar_Random::DistanceLimit)
        .def("StaticClass", &UGearboxDialogVar_Random::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}