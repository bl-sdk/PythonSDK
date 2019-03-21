#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionCompound()
{
    class_< UMaterialExpressionCompound, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionCompound", no_init)
        .def_readwrite("MaterialExpressions", &UMaterialExpressionCompound::MaterialExpressions)
        .def_readwrite("Caption", &UMaterialExpressionCompound::Caption)
        .def("StaticClass", &UMaterialExpressionCompound::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}