#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryCustomPropertyEditorDelegate(py::module &m)
{
    py::class_< UActorFactoryCustomPropertyEditorDelegate,  UObject   >(m, "UActorFactoryCustomPropertyEditorDelegate")
		.def_static("StaticClass", &UActorFactoryCustomPropertyEditorDelegate::StaticClass, py::return_value_policy::reference)
          ;
}