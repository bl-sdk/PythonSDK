#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ModifyProperty(py::module &m)
{
    py::class_< USeqAct_ModifyProperty,  USequenceAction   >(m, "USeqAct_ModifyProperty")
		.def_static("StaticClass", &USeqAct_ModifyProperty::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Properties", &USeqAct_ModifyProperty::Properties)
          ;
}