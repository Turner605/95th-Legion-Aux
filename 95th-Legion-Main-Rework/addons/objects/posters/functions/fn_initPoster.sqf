params ["_poster", "_type"];

private _posterOptions = [];

switch (_type) do {
	case "Square": {
        _posterOptions = [
            "\Z\AUX_95th\addons\objects\posters\data\complete\Quebec_1.paa",
            "\Z\AUX_95th\addons\objects\posters\data\complete\Manila_1.paa",
            "\Z\AUX_95th\addons\objects\posters\data\complete\Smokery_2.paa",
            "\Z\AUX_95th\addons\objects\posters\data\complete\Mermaid_1.paa"
        ];
    };

	case "Horizontal": {
        _posterOptions = [
            "\Z\AUX_95th\addons\objects\posters\data\complete\Manila_2.paa",
            "\Z\AUX_95th\addons\objects\posters\data\complete\Manila_3.paa",
            "\Z\AUX_95th\addons\objects\posters\data\complete\Smokery_1.paa",
            "\Z\AUX_95th\addons\objects\posters\data\complete\Smokery_3.paa"
        ];
    };

	case "Vertical": {
        _posterOptions = [
            "\Z\AUX_95th\addons\objects\posters\data\complete\Manila_4.paa",
            "\Z\AUX_95th\addons\objects\posters\data\complete\Lisek_1.paa",
            "\Z\AUX_95th\addons\objects\posters\data\complete\Lisek_2.paa",
            "\Z\AUX_95th\addons\objects\posters\data\complete\Quebec_2.paa",
            "\Z\AUX_95th\addons\objects\posters\data\complete\Quebec_3.paa"
        ];
    };
};

private _posterTexture = _posterOptions call BIS_fnc_SelectRandom;

_poster setObjectTextureGlobal [0, _posterTexture];