#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UExpressionTree()
{
    class_< UExpressionTree, bases< UExpressionEvaluator >  , boost::noncopyable>("UExpressionTree", no_init)
        .def_readwrite("RootChild", &UExpressionTree::RootChild)
        .def("StaticClass", &UExpressionTree::StaticClass, return_value_policy< reference_existing_object >())
        .def("Evaluate", &UExpressionTree::Evaluate)
        .staticmethod("StaticClass")
  ;
}