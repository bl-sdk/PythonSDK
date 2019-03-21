#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionPanner()
{
    class_< UMaterialExpressionPanner, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionPanner", no_init)
        .def_readwrite("Coordinate", &UMaterialExpressionPanner::Coordinate)
        .def_readwrite("Time", &UMaterialExpressionPanner::Time)
        .def_readwrite("SpeedX", &UMaterialExpressionPanner::SpeedX)
        .def_readwrite("SpeedY", &UMaterialExpressionPanner::SpeedY)
        .def("StaticClass", &UMaterialExpressionPanner::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}