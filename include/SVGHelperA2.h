// Name: Haifaa Abushaaban [1146372]

#ifndef SVGHELPER2_H
#define SVGHELPER2_H

#include "SVGParser.h"

// Module 1 helper functions:

// Function to validate xml file against a schema file
bool validateFileSVG(const char* fileName, const char* schemaFile);

// Functions to write svg shape struct to a node in the xml tree
void addAttrListToParentNode(List* list, xmlNodePtr* parent);
void addRectListToParentNode(List* rectList, xmlNodePtr* parent);
void addCircListToParentNode(List* circList, xmlNodePtr* parent);
void addPathListToParentNode(List* pathList, xmlNodePtr* parent);
void addGroupListToParentNode(List* groupList, xmlNodePtr* parent);
// Function to convert floating point number and units to a string
char* unitsWithNumber(float number, char units[]);

// Functions to check for validity for the structs and lists in SVGParser.h
bool validSVGStruct(const SVG* svg);
bool validAttrListStruct(List* otherAttributes);
bool validRectListStruct(List* rectangles);
bool validCircListStruct(List* circles);
bool validPathListStruct(List* paths);
bool validGroupListStruct(List* groupList);
bool isListEmpty(List* list);
bool checkRange(float number);

#endif