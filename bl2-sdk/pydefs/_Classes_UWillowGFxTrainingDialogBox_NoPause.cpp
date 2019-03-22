#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxTrainingDialogBox_NoPause(py::module &m)
{
    py::class_< UWillowGFxTrainingDialogBox_NoPause,  UWillowGFxTrainingDialogBox   >(m, "UWillowGFxTrainingDialogBox_NoPause")
          ;
}