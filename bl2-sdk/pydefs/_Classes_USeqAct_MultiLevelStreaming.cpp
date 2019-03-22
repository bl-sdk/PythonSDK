#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_MultiLevelStreaming(py::module &m)
{
    py::class_< USeqAct_MultiLevelStreaming,  USeqAct_LevelStreamingBase   >(m, "USeqAct_MultiLevelStreaming")
        .def_readwrite("Levels", &USeqAct_MultiLevelStreaming::Levels)
          ;
}