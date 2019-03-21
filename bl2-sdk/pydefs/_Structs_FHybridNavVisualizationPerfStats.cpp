#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FHybridNavVisualizationPerfStats()
{
    py::class_< FHybridNavVisualizationPerfStats >("FHybridNavVisualizationPerfStats")
        .def_readwrite("VisualizationBuildingStartTime", &FHybridNavVisualizationPerfStats::VisualizationBuildingStartTime)
        .def_readwrite("VisualizationBuildingEndTime", &FHybridNavVisualizationPerfStats::VisualizationBuildingEndTime)
        .def_readwrite("CyclesBuildingVisualization", &FHybridNavVisualizationPerfStats::CyclesBuildingVisualization)
        .def_readwrite("NumberOfNodesConsidered", &FHybridNavVisualizationPerfStats::NumberOfNodesConsidered)
        .def_readwrite("NumberOfTraces", &FHybridNavVisualizationPerfStats::NumberOfTraces)
        .def_readwrite("NumberOfEndPointAttempts", &FHybridNavVisualizationPerfStats::NumberOfEndPointAttempts)
        .def_readwrite("NumberOfSideAttempts", &FHybridNavVisualizationPerfStats::NumberOfSideAttempts)
        .def_readwrite("NumberOfNodesInVisualization", &FHybridNavVisualizationPerfStats::NumberOfNodesInVisualization)
        .def_readwrite("NumberOfPointsInVisualization", &FHybridNavVisualizationPerfStats::NumberOfPointsInVisualization)
        .def_readwrite("NumClosestNodesRequests", &FHybridNavVisualizationPerfStats::NumClosestNodesRequests)
        .def_readwrite("NumClosestNodeTests", &FHybridNavVisualizationPerfStats::NumClosestNodeTests)
  ;
}