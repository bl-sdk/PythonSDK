#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FHybridNavVisualizationPerfStats()
{
    class_< FHybridNavVisualizationPerfStats >("FHybridNavVisualizationPerfStats", no_init)
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