

function Name(){
	//	true : minimal
	//	null : potential
	this._componentsStructure = {
		name : {
            start:  true,
            opt_m:  null,
            opt_e:  null,
            opt_f:  null,
            end:    true
        },
        title : {
            link : true,
            adj  : null,
            noun : true
        },
        home : {
            pre : true,
            town: true
        }
	};

    //  key implies value
    this._componentsStructureRelations = {
        opt_e : {
            opt_f : null
        }
    };




    this._components = {
        name : {
            structure : {},
            string : ''
        },
        title : {
            structure : {},
            string : ''
        },
        home : {
            structure : {},
            string : ''
        }
    };


    this._componentElements = {
        start: ['Ar', 'Ph', 'Ap', 'Am', 'The', 'Dem', 'An', 'Soc', 'Al', 'Arm', 'Bo', 'Cass', 'Ce', 'Cl', 'Da', 'Di', 'Ep', 'Eud', 'Ge', 'Her', 'Hel', 'Hipp', 'Ich', 'Io', 'Is', 'Lyc', 'Le', 'Men', 'Mel', 'Met', 'Mod', 'Nic', 'Num', 'Oen', 'Oc', 'Pan', 'Par', 'Per', 'Phi', 'Pl', 'Pol' ,'Pr', 'Pyr', 'Sal', 'Sex', 'Sec', 'Sim', 'Sir', 'Str', 'Tel', 'Th', ''],
        opt_m: ['ist', 'oll', 'ad', 'is', 'om', 'et', 'ex', 'il', 'ax', 'on', 'it', 'ic', 'el', 'ut', 'eo'],
        opt_e: ['ox', 'et','ar', 'in', 'dro', 'ma', 'ur', 'id','ro', 'li'],
        opt_f: ['the', 'ri' , 'cy', 't', 'r'],
        end	 : ['us','ed','des', 'oax', 'es', 'ax', 'chus', 'or', 'ria', 'lo', 'to', 'ch', 'ro'],
        link : ['the '],
        adj	 : ['dubious ', 'doubtful ', 'master ', 'wise ', 'loving ', 'terrible ', 'couragous ', 'contemplative ', 'revered ', 'patient ', 'noble ', 'kind ', 'respectable ', 'rightous ', 'good '],
        noun : ['skeptic', 'cynic', 'stoic', 'sophist', 'neoplatonic'],
        pre  : ['of ', 'from ', ', terror of ', ', lord of ', ', beloved of ', ', blessed by ', ', born of '],
        town : ['Rhodes', 'Alexandreia', 'Antioch', 'Apollonia', 'Argos', 'Athens', 'Byzantium', 'Cythera', 'Corinth', 'Delphi', 'Delos', 'Eretria', 'Gournia', 'Heliopolis', 'Neapolis', 'Naxos', 'Olympia', 'Pisa', 'Salamis', 'Sparta', 'Syracuse', 'Taras', 'Thebes', 'Troy', 'Zacynthus' ]
    };

}



Name.prototype = {
	
	createName : function(name, occupation){
		this._generateStructure();
        this._generateElements();
	},

    getFullName : function(){
        var full_name = '';
        for(var comp in this._components){
            full_name += this._components[comp].string + ' ';
        }
        return full_name.trim();
    },

    /*
        Generates a pseudorandom template to fill with appropriate name elements.
        The names have the format of:
            1.  Name
            2.  Title
            3.  Home
     */
	_generateStructure : function()
	{
        this._components.name.structure  = this._generateComponentStructure('name');
        this._components.title.structure = this._generateComponentStructure('title');
        this._components.home.structure  = this._generateComponentStructure('home');
    },

    _generateComponentStructure : function(component){
        var structure = [];
        var relations = [];

        for(var element in this._componentsStructure[component]) {
            structure[element] = false;
            if(this._componentsStructure[component][element] == true){
                structure[element] = true;
            } else if (this._componentsStructure[component][element] == null) {
                structure[element] = !!Math.floor(Math.random() *  2);
            }
        }

        var relations = this._componentsStructureRelations;
        for(var parent in relations){
            if(structure.hasOwnProperty(parent)){
            //  parent is in structure ...
                for(var child in relations[parent]){
                    if(structure.hasOwnProperty(child)){
                        if(structure[parent] == false) {
                            structure[child] = false;
                        } else if(relations[parent][child] == true){
                            structure[child] = true
                        } else if(relations[parent][child] == null){
                            structure[child] = !!Math.floor(Math.random() * 2);
                        }
                    }
                }
            }
        }

        return structure;
    },

    _generateElements : function()
    {
        this._components.name.string  = this._generateComponentElements('name');
        this._components.title.string = this._generateComponentElements('title');
        this._components.home.string  = this._generateComponentElements('home');
    },

    _generateComponentElements: function(component)
    {
        var comp_string = '';
        for(var elem_str in this._components[component].structure){
            var all_elems = this._componentElements[elem_str];
            if(this._components[component].structure[elem_str] == true){
                comp_string += all_elems[Math.floor(Math.random() * all_elems.length)];
            }
        }
        return comp_string;
    }


};


window.onload = init;

function init() {
    var name_in 	  = document.getElementById('name');
    var occupation_in = document.getElementsByName('occuption');
    var submit 		  = document.getElementById('btn-generate');


    submit.addEventListener('click', function(e){
        console.log('button click');
    });

    var name = new Name();
    name.createName('nick', 'philospher');
    console.log(name.getFullName());
    //generateName();
}

function _getInputs() {
    //	Set Name
    var name_val = name_in.value;


    //	Set Occupation
    for(var i=0; i<occupation_in.length; i++) {
        if(occupation_in[i].checked){
             occupations_val[i];
        }
    }
}

function generateName() {
    _getInputs();
    var display = document.getElementById('test-place');
    display.textContent = 'abc';




}










