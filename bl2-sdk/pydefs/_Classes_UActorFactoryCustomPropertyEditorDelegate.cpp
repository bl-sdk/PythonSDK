#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryCustomPropertyEditorDelegate(py::object m)
{
    py::class_< UActorFactoryCustomPropertyEditorDelegate,  UObject   >(m, "UActorFactoryCustomPropertyEditorDelegate")
        .def("StaticClass", &UActorFactoryCustomPropertyEditorDelegate::StaticClass, py::return_value_policy::reference)
          ;
}