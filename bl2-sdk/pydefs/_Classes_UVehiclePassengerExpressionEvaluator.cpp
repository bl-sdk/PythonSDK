#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UVehiclePassengerExpressionEvaluator()
{
    class_< UVehiclePassengerExpressionEvaluator, bases< UExpressionEvaluator >  , boost::noncopyable>("UVehiclePassengerExpressionEvaluator", no_init)
        .def("StaticClass", &UVehiclePassengerExpressionEvaluator::StaticClass, return_value_policy< reference_existing_object >())
        .def("Evaluate", &UVehiclePassengerExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}