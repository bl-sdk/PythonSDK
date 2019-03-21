#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionOcclusionPercentage()
{
    class_< UMaterialExpressionOcclusionPercentage, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionOcclusionPercentage", no_init)
        .def("StaticClass", &UMaterialExpressionOcclusionPercentage::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}