#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionComment()
{
    class_< UMaterialExpressionComment, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionComment", no_init)
        .def_readwrite("PosX", &UMaterialExpressionComment::PosX)
        .def_readwrite("PosY", &UMaterialExpressionComment::PosY)
        .def_readwrite("SizeX", &UMaterialExpressionComment::SizeX)
        .def_readwrite("SizeY", &UMaterialExpressionComment::SizeY)
        .def_readwrite("Text", &UMaterialExpressionComment::Text)
        .def("StaticClass", &UMaterialExpressionComment::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}