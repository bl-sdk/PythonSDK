#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWeaponEquippedExpressionEvaluator()
{
    class_< UWeaponEquippedExpressionEvaluator, bases< UExpressionEvaluator >  , boost::noncopyable>("UWeaponEquippedExpressionEvaluator", no_init)
        .def_readwrite("WeaponType", &UWeaponEquippedExpressionEvaluator::WeaponType)
        .def("StaticClass", &UWeaponEquippedExpressionEvaluator::StaticClass, return_value_policy< reference_existing_object >())
        .def("Evaluate", &UWeaponEquippedExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}