#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryCustomPropertyEditorDelegate()
{
    py::class_< UActorFactoryCustomPropertyEditorDelegate,  UObject   >("UActorFactoryCustomPropertyEditorDelegate")
        .def("StaticClass", &UActorFactoryCustomPropertyEditorDelegate::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}