#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionParticleMacroUV()
{
    class_< UMaterialExpressionParticleMacroUV, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionParticleMacroUV", no_init)
        .def("StaticClass", &UMaterialExpressionParticleMacroUV::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}