#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSoundClassEditorData()
{
    class_< FSoundClassEditorData >("FSoundClassEditorData", no_init)
        .def_readwrite("NodePosX", &FSoundClassEditorData::NodePosX)
        .def_readwrite("NodePosY", &FSoundClassEditorData::NodePosY)
  ;
}