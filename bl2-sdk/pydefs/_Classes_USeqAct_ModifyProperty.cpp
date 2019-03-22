#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ModifyProperty(py::module &m)
{
    py::class_< USeqAct_ModifyProperty,  USequenceAction   >(m, "USeqAct_ModifyProperty")
        .def_readwrite("Properties", &USeqAct_ModifyProperty::Properties)
          ;
}