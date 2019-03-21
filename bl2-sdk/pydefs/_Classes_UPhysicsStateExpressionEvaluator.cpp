#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPhysicsStateExpressionEvaluator()
{
    class_< UPhysicsStateExpressionEvaluator, bases< UExpressionEvaluator >  , boost::noncopyable>("UPhysicsStateExpressionEvaluator", no_init)
        .def_readwrite("PhysicsState", &UPhysicsStateExpressionEvaluator::PhysicsState)
        .def("StaticClass", &UPhysicsStateExpressionEvaluator::StaticClass, return_value_policy< reference_existing_object >())
        .def("Evaluate", &UPhysicsStateExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}