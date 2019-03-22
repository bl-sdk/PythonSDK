#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UChallengesPanelDefinition(py::module &m)
{
    py::class_< UChallengesPanelDefinition,  UGBXDefinition   >(m, "UChallengesPanelDefinition")
          ;
}