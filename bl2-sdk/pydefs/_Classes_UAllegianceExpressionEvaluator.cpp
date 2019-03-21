#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAllegianceExpressionEvaluator()
{
    class_< UAllegianceExpressionEvaluator, bases< UExpressionEvaluator >  , boost::noncopyable>("UAllegianceExpressionEvaluator", no_init)
        .def_readwrite("AllegianceCheck", &UAllegianceExpressionEvaluator::AllegianceCheck)
        .def_readwrite("Allegiance", &UAllegianceExpressionEvaluator::Allegiance)
        .def("StaticClass", &UAllegianceExpressionEvaluator::StaticClass, return_value_policy< reference_existing_object >())
        .def("Evaluate", &UAllegianceExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}