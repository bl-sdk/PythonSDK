#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSoundNodeEditorData()
{
    class_< FSoundNodeEditorData >("FSoundNodeEditorData", no_init)
        .def_readwrite("NodePosX", &FSoundNodeEditorData::NodePosX)
        .def_readwrite("NodePosY", &FSoundNodeEditorData::NodePosY)
  ;
}