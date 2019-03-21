#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNumberWeaponsEquippedExpressionEvaluator()
{
    class_< UNumberWeaponsEquippedExpressionEvaluator, bases< UExpressionEvaluator >  , boost::noncopyable>("UNumberWeaponsEquippedExpressionEvaluator", no_init)
        .def_readwrite("NumberOfWeapons", &UNumberWeaponsEquippedExpressionEvaluator::NumberOfWeapons)
        .def("StaticClass", &UNumberWeaponsEquippedExpressionEvaluator::StaticClass, return_value_policy< reference_existing_object >())
        .def("Evaluate", &UNumberWeaponsEquippedExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}