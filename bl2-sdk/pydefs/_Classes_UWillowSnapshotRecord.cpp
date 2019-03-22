#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSnapshotRecord(py::module &m)
{
    py::class_< UWillowSnapshotRecord,  USnapshotRecord   >(m, "UWillowSnapshotRecord")
          ;
}